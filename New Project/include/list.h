#include <string>

class List
{
private:
    class Node
    {
        public:
            Node(std::string data);
            ~Node();

            std::string data;
            Node *prev;
            Node *next;
    };
public:
    class Iterator
    {
    public:
        Iterator();
        std::string get() const;
        void next();
        void previous();
    private:
        Node *position;
        Node *last;
    };
    
    Iterator begin();
    Iterator end();
    void push_back(std::string val);
};