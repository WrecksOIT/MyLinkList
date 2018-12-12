#pragma once
#include "Node.h"
#include <iostream>

class MyLinkList
{
private:
	Node* head_{nullptr};
	Node* tail_{nullptr};

public:
	~MyLinkList()
	{
		if (head_ != nullptr)
		{
			auto temp = head_;
			while(temp->next_!= nullptr)
			{
				temp = head_->next_;
				delete head_;
				head_ = temp;
			}
			delete head_;
		}
	}
	void create_node(int const value)
	{
		auto* temp = new Node;
		temp->data_ = value;
		
		if (head_ == nullptr)
		{
			head_ = temp;
		}
		else if (tail_ == nullptr)
		{
			head_->next_ = temp;
			tail_ = temp;
		}
		else
		{
			tail_->next_ = temp;
			tail_ = temp;
		}
	}
	void display() const
	{
		if(head_ != nullptr)
		{
			auto* temp = head_;
			
			while (temp->next_ != nullptr)
			{
				std::cout << temp->data_ << "\t" << temp->next_ << std::endl;
				temp = temp->next_;
			}
			std::cout << temp->data_ << std::endl;
		}
	}
};

