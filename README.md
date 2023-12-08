# ft_printf

<p align="center">
    <img src="./print.png"/>
</p>

<p align="center">This project is about building my own printf function.</p>

---
<h3 align="center">Variadic Functions</h3>
Variadic functions are functions that receive a number of arguments, i.e., they don't have a fixed number of arguments like regular functions:

```c
//regular function
int is_even(int number);

//variadic function
int are_all_even(int n, ...);
```
To create a variadic function, we need the tools provided by the `<stdarg.h>` library. These tools will allow us to create a variadic function and manipulate the variadic number of arguments. I believe these functions will create and manipulate a singly linked list (although I have not confirmed, it makes a lot of sense). Among these tools, the most useful for this project are:
- `va_start`: Start the list of arguments, receiving two arguments: A `va_list` type variable (this type is provided by the `stdarg` library) and the last fixed argument.
- `va_arg`: Will return the current argument from the list, receiving two arguments: the variable that initialized the arguments list and the type that the current argument from the list should have.
- `va_end`: Will terminate the arguments list, freeing all the memory allocated in the list.
