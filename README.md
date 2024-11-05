# Inheritance
# App Used: VS Code
# Theory
## Inheritance Defination:
The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important features of Object-Oriented Programming. Inheritance is a feature or a process in which, new classes are created from the existing classes. The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”. The derived class now is said to be inherited from the base class.

## Syntax of Inheritance
Syntax of Inheritance class derived_class_name : access-specifier base_class_name { // body .... };
## Properties of Constructors:
Inheritance is a fundamental concept in object-oriented programming (OOP) that allows one class (the child or derived class) to inherit properties and behaviors (methods) from another class (the parent or base class). Here are some key properties of inheritance:

1. Code Reusability
Inheritance allows a derived class to use methods and attributes of a base class, promoting code reuse and reducing redundancy.
2. Method Overriding
A derived class can provide a specific implementation of a method that is already defined in its base class. This is called overriding. It allows for dynamic polymorphism.
3. Access Control
Inheritance respects access specifiers:
Public Inheritance: Public members of the base class remain public in the derived class, while protected members become protected.
Protected Inheritance: Public and protected members of the base class become protected in the derived class.
Private Inheritance: Public and protected members of the base class become private in the derived class.
4. Hierarchical Structure
Inheritance allows the creation of a hierarchy of classes. A single base class can have multiple derived classes, enabling a structured and organized approach to class design.
5. Abstract Classes and Interfaces
Inheritance allows for the creation of abstract classes that cannot be instantiated but can be inherited by other classes. Interfaces (or abstract base classes) define a contract for derived classes to implement specific methods.
6. Virtual Functions and Polymorphism
Inheritance facilitates polymorphism, which allows methods to be invoked on base class pointers or references that may point to derived class objects. Using virtual functions enables runtime method resolution.
## Advantages of Inheritance:
Inheritance offers several advantages in object-oriented programming (OOP) that enhance software design and development. Here are the key benefits:

1. Code Reusability
Inheritance allows developers to reuse existing code, reducing redundancy. By inheriting common functionality from a base class, derived classes can implement their specific features without rewriting shared code.
2. Modularity
Inheritance promotes modular design. Each class can be developed independently, allowing for easier maintenance and updates. Changes made to a base class automatically propagate to derived classes, enhancing consistency.
3. Improved Maintainability
With a clear class hierarchy, maintaining and updating code becomes simpler. If a base class needs modifications, those changes will automatically apply to all derived classes, minimizing the risk of errors.
4. Enhanced Functionality
Derived classes can extend or modify the functionality of base classes through method overriding and additional properties, allowing for more specialized behavior while maintaining a common interface.
5. Polymorphism
Inheritance supports polymorphism, enabling the use of base class references or pointers to interact with derived class objects. This flexibility allows for dynamic method resolution and more generalized code.
6. Easier Testing and Debugging
With a well-defined hierarchy, testing individual components becomes more straightforward. Each class can be tested in isolation, and interactions between classes can be validated systematically.
7. Clearer Relationships
Inheritance establishes clear relationships between classes, which helps in understanding and visualizing the structure of the code. It reflects real-world relationships, making the model intuitive.
8. Encapsulation and Abstraction
Inheritance supports encapsulation and abstraction by allowing derived classes to hide complex implementations while exposing simple interfaces. This separation of concerns leads to cleaner code.
Types of Inheritance:
1. Single Inheritance:
Definition: Single inheritance is a type of inheritance in which a derived class inherits from only one base class. This establishes a parent-child relationship between the two classes, where the derived class can access public and protected members of the base class.

## Key Characteristics of Single Inheritance:
Single Parent: The derived class has only one immediate parent class.
Code Reusability: The derived class can reuse the properties and methods of the base class.
Simplicity: Single inheritance is straightforward and easy to understand compared to multiple inheritance, which can introduce complexity and ambiguity.
Method Overriding: The derived class can override methods of the base class to provide specific implementations.
Syntax
The syntax for single inheritance involves the following components:

Base Class Declaration: Define the base class with its attributes and methods.
Derived Class Declaration: Define the derived class using the public, protected, or private access specifier to inherit from the base class.
2.Multiple Inheritance:
Definition: Multiple inheritance is a feature in object-oriented programming (OOP) where a derived class can inherit from more than one base class. This allows the derived class to acquire the properties and behaviors (methods) of multiple base classes, promoting code reuse and flexibility.

## Key Characteristics of Multiple Inheritance:
Multiple Base Classes: A derived class can have more than one base class, allowing it to inherit multiple sets of attributes and methods.
Complexity: While multiple inheritance provides powerful capabilities, it can also introduce complexity, such as ambiguity in method resolution and the potential for the "Diamond Problem."
Code Reusability: It allows developers to reuse and combine functionalities from different base classes, leading to more modular designs.
Polymorphism: Like single inheritance, multiple inheritance supports polymorphism, enabling base class pointers to refer to derived class objects.
Syntax of multiple inheritance:
class A { ... .. ... }; class B { ... .. ... }; class C: public A,public B { ... ... ... };

## 3.Multilevel Inheritance:
Definition: Multilevel inheritance is a type of inheritance in which a class (derived class) inherits from another derived class, forming a hierarchy of classes. This creates a chain of inheritance where one class derives from another, which in turn may derive from another class, and so forth.
Key Characteristics of Multilevel Inheritance:
Hierarchical Structure: It creates a clear and organized hierarchy of classes, which can represent real-world relationships more intuitively.
Code Reusability: Derived classes can inherit properties and methods from their parent classes, promoting code reuse.
Encapsulation: Each class can encapsulate its own data and methods, making it easier to manage complexity in large applications.
Polymorphism: Multilevel inheritance supports polymorphism, allowing for dynamic method resolution.
Syntax of multilevel inheritance:
class A // base class { ........... }; class B : access_specifier A // derived class { ........... } ; class C : access_specifier B // derived from derived class B { ........... } ;

## 4. Hierarchical Inheritance:
Definition: Hierarchical inheritance is a type of inheritance where multiple derived classes inherit from a single base class. This creates a tree-like structure where one base class serves as the parent to several derived classes. Each derived class can extend or modify the behavior of the base class while also introducing its own unique features.
Key Characteristics of Hierarchical Inheritance:
Single Base Class: Multiple derived classes share a common base class, which simplifies code organization and promotes reuse.
Code Reusability: Derived classes can inherit methods and properties from the base class, allowing for efficient code reuse without redundancy.
Encapsulation: Each derived class can encapsulate its own attributes and behaviors, promoting better data management and separation of concerns.
Polymorphism: Hierarchical inheritance supports polymorphism, enabling a single interface to represent different derived classes. This is particularly useful in scenarios where derived classes override base class methods.
Simplified Maintenance: Changes made to the base class automatically affect all derived classes, making maintenance and updates easier and more consistent.

# Algorithms
## simple inheritance
Start: Begin the program.

Define Class Uni:

Attributes:
Create a string variable uni.
Initialize uni with the value "Symbiosis: ".
Method:
Define a method discipline() that prints "Engineering".
Define Class Dep:

Inheritance:
Inherit publicly from class Uni.
Attributes:
Create a string variable dept.
Initialize dept with the value "Electronics & Communication".
Define main() Function:

Create Object:
Instantiate an object u1 of class Dep.
Call Method:
Invoke the discipline() method on the u1 object to print "Engineering".
Display Output:
Print the concatenated result of u1.uni and u1.dept.
End: Terminate the program.

## multiple inheritacnce
Start: Begin the program.

Define Class Vehicle:

Attributes:
Create a string variable company.
Initialize company with the value "Ford".
Method:
Define a method type() that prints "Mustang".
Define Class Specs:

Attributes:
Create a string variable mileage.
Initialize mileage with the value "8 kmpl".
Method:
Define a method colour() that prints "Grey".
Define Class Car:

Inheritance:
Inherit publicly from both Vehicle and Specs.
Attributes:
Create a string variable seater.
Constructor:
Initialize seater with the value "4 seater".
Define main() Function:

Create Object:
Instantiate an object f2 of class Car.
Call Method:
Invoke the colour() method on the f2 object to print the color.
Display Company and Type:
Print the company attribute of f2.
Call the type() method on the f2 object to print the vehicle type.
Display Seater and Mileage:
Print the number of seats in parentheses.
Print the mileage of the car.
End: Terminate the program.

## multilevel inheritance
Start: Begin the program.

Define Class Food:

Attributes:
Create a string variable cuisine.
Initialize cuisine with the value "Indian".
Method:
Define a method type() that prints "Asian".
Define Class Dish:

Inheritance:
Inherit publicly from class Food.
Attributes:
Create a string variable dish.
Initialize dish with the value "Biryani".
Define Class Restaurant:

Inheritance:
Inherit publicly from class Dish.
Attributes:
Create a string variable name.
Initialize name with the value "Spice Kitchen".
Define main() Function:

Create Object:
Instantiate an object f3 of class Restaurant.
Call Method:
Invoke the type() method on the f3 object to print the type of cuisine.
Display Output:
Print the cuisine attribute of f3 followed by the dish.
Print the name attribute of f3 as the restaurant name.
End: Terminate the program.

## heirarhial inehritance
Start: Begin the program.

Define Class Jeans:

Attributes:
Create an array of strings type[3].
Initialize type with:
type[0] = "Bootcut"
type[1] = "Wide Leg"
type[2] = "Skinny"
Method:
Define a method brand() that prints "H&M - &Denim".
Define Class Bootcut:

Inheritance:
Inherit publicly from class Jeans.
Attributes:
Create a string variable color.
Initialize color with "Dark Blue".
Define Class WL:

Inheritance:
Inherit publicly from class Jeans.
Attributes:
Create a string variable color.
Initialize color with "Black".
Define Class Skinny:

Inheritance:
Inherit publicly from class Jeans.
Attributes:
Create a string variable color.
Constructor:
Initialize color with "Grey".
Define main() Function:

Create Object:

Instantiate an object j1 of class Bootcut.
Call Method:

Invoke the brand() method on j1 to print the brand.
Display Bootcut Details:

Print the type and color of j1.
Create Object:

Instantiate an object j2 of class WL.
Call Method:

Invoke the brand() method on j2 to print the brand.
Display Wide Leg Details:

Print the type and color of j2.
Create Object:

Instantiate an object j3 of class Skinny.
Call Method:

Invoke the brand() method on j3 to print the brand.
Display Skinny Details:

Print the type and color of j3.
End: Terminate the program.

# Conclusion:
We learnt to use the concepts of Inheritance and types of inheritance single , multiple , multilevel , hierarchical inheritance.








