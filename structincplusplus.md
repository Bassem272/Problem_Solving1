Let's analyze the code and predict the output:

```cpp
#include <iostream>

struct TestStruct
{
  void action()
  {
    std::cout << "Non-const" << std::endl;
  }
  void action() const
  {
    std::cout << "Const" << std::endl;
  }
};

template<typename T>
void function1(T & t)
{
  t.action();
}

void function2(const TestStruct & a)
{
  a.action();
}

int main()
{
  TestStruct one;
  const TestStruct two;
  std::cout << "1: "; one.action();
  std::cout << "2: "; two.action();
  std::cout << "3: "; function1(two);
  std::cout << "4: "; function1(one);
  std::cout << "5: "; function2(one);
  std::cout << "6: "; function2(two);
}
```

Here's what each line will output:

1. `one.action();` - Calls the non-const `action()` member function of `one`. Output: "Non-const"
2. `two.action();` - Calls the const `action()` member function of `two`. Output: "Const"
3. `function1(two);` - Calls `function1` with a non-const reference to `two`, calls the non-const `action()` member function. Output: "Non-const"
4. `function1(one);` - Calls `function1` with a non-const reference to `one`, calls the non-const `action()` member function. Output: "Non-const"
5. `function2(one);` - Calls `function2` with a const reference to `one`, calls the const `action()` member function. Output: "Const"
6. `function2(two);` - Calls `function2` with a const reference to `two`, calls the const `action()` member function. Output: "Const"

Now, let's discuss the `const` keyword:

- `const` is used to indicate that an object or a member function does not modify the state of the object. In the context of member functions, it is used to define both const and non-const versions of the function. A const member function promises not to modify any non-static data members of the class.
  
- In the provided code, `void action() const` is a const-qualified member function of `TestStruct`. It means that when this function is called on a const object (or const reference), it will be the version with `const` that gets called.

In the `function2` function, a `const` reference to `TestStruct` is passed, so it can only call const-qualified member functions. This helps enforce that the function does not modify the object it operates on.