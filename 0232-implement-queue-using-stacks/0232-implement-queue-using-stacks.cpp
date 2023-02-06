class MyQueue
{
public:
    stack<int> st, st1;//declaring 2 stacks
    MyQueue()
    {
    }
    void push(int x)
    {
        st.push(x);//we will push every new element in st.
    }

    int pop()  //we will pop every element from st2 as we have to pop in FIFO order
    {
        int x;
        if (st1.empty())    //if st1 is empty then we will push all elements from st to st1 otherwise we will directly pop from st1.
        {
            while (!st.empty())
            {
                st1.push(st.top());
                st.pop();
            }
        }

        x = st1.top(); 
        st1.pop();

        return x;
    }

    int peek()
    {
        int x;
        if (st1.empty())    //if st1 is empty then we will push all elements from st to st1 otherwise we will directly peek into st1.
        {
            while (!st.empty())
            {
                st1.push(st.top());
                st.pop();
            }
        }

        x = st1.top();

        return x;
    }

    bool empty() //if both stacks become empty then return true else false
    {
        if (st1.empty() && st.empty())
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */