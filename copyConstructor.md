
Copy Copy Copy Equal Copy

Explanation
Copy constructor is called for t2(t1) and t3 = t2.
Calling function func1(const Test) also results with call of copy constructor as the parameter is passed by value.
Assignment operator is called for t2 = t3.
Calling function func2() also results with call of copy constructor as the return parameter is passed by value.
Copy Equal Copy Equal Copy

Explanation Test t3 = t2 calls copy constructor.
Copy Copy Copy Equal

Explanation t2.func2() results with call to copy constructor as the return parameter is passed by value
Copy Copy Equal

Copy Equal Equal

Your feedback helps our community to create more great challenge
