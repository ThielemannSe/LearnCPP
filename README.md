# Learning CPP!

This is a small course for learning C++.

## Function overloading

C++ allows to provide multiple definitions for a certain function. This method
is called ***function overloading***.

The following chapter gives a small introduction to this topic.


Let's create a function for printing an integer to the console.

```cpp
using namespace std;

void print(int a)
{
    cout << "Hello I'm an integer : " << a << endl;
}
```

Now we can use this function in our main function:

```cpp
int main()
{
    int b = 9;
    print(b);
}
```

And we will get the following result:

```
Hello I'm an integer: 9
```
