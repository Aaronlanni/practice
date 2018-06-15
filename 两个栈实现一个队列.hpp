
class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        if(stack1.size()==0&&stack2.size()==0)
            return 0;
        if(stack2.empty())
        {
            while(stack1.size()!=0)
            {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        int top=stack2.top();
        stack2.pop();
        return top;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};