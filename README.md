# Structs

## Structures

* A structure in C is a group of related variables
  * Each variable in the struct is a member (aslo often called a property)
  * You can think of it as like a class with only public properties and no method or constructor

* You declare a structure as such:

    ```c
    struct struct_name {
        member_type member_name;
        member_type member_name;
        ...
    };
    ```

* Example:

    ```c
    struct person {
        char *name;
        int age;
    };
    ```

---

## Struct Variable Declaration

* The declaration of a struct variable works almost as expected:

    ```c
    struct struct_name var_name;
    ```

* Example:
    struct Point aPoint;

* The same rules about locations of variables in memory apply to structs

## Struct Variable Declaration & Initialization

* Zero-initialize all members

  ```c
    struct Point aPoint = { 0 };
  ```

* Initialize members, in order, to specific values:

  ```c
    struct Point aPoint = { 1, 2 };
  ```

* This only works when declaring and initializing at the same time.
  * You cannot initialize after declaring or reassign with this syntax.

* As a matter of practice, always initialize one way or the other!
  * A struct's members will be garbage values, otherwise.

---

## Aside: Aliasing Types with typedef

* C's typedef keyword defines another name for another type

* The syntax is:

    ```c
    typedef type alias_name;
    ```

* for example:

    ```c
    typedef unsigned int whole_number;
    ```

* After defining a type, you can use it in place of the original:

    ```c
    whole_number x = 1;
    whole_number y = 211;
    ```

---

## Aside: Alias Struct Types with typedef

* When declaring struct arrays and variables, most C programmers find it verbose to have to write struct keyword at every declaration.

* The typedef keyword provides a way out!

* The syntax is the same as before:

    ```c
    typedef struct struct_name alias_name;
    ```

* Examples:

    ```c
    typedef struct Point point_t;
    typedef struct Point Point;
    ```

* After defining two aiases of struct Point, you could use either with the same effect:

  ```c
    point_t x = { 0 };
    Point y = { 1.0, 2.0 };
  ```

* These two steps are commonly combined into one:

  ```c
    typedef struct Point {
        double x;
        double y;
    } Point;
  ```

---

## Accessing Members of struct Pointers with Arrow Syntax

* Consider the following variables:
  * Point aPoint = { 0 };
  * Point *aPointPtr = \&aPoint;

* C provides a convenieInt arrow syntax for dereferencing a struct pointer and accessing a member:
  * aPointPtr->x
  * is syntactic sugar for: (*aPointPtr).x

* Also works for lvalues (left-hand side) in assignment statements:
  * aPointPtr->y = 1;
  * vs. (*aPointPtr).y = 1;
