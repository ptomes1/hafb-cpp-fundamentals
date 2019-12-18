#pragma once

class  Counter
{
    private:
        unsigned int count_;
    public:
        Counter(): count_(0){}
        ~Counter(){}
        //Set&Get
        unsigned int count(){return count_;}
        void set_count(unsigned int count){count_=count;}
        // void operator++()
        // {
        //     ++count_;
        // }
        Counter operator++();
};