class stack
{
   private:
      static const int MAX = 100;
      char Store[MAX];
      int top;
   public:
      stack();
      void push(char x);
      char pop();
};

