# Payment System using Abstract Class in C++

This project demonstrates **abstraction and runtime polymorphism** in C++ through a **Payment system**.
Different payment methods implement a common interface, allowing payments to be processed dynamically.

---

## 📌 Objective

To understand and implement:
- Abstract classes
- Pure virtual functions
- Runtime polymorphism
- Inheritance and method overriding

---

## 🧠 Concepts Used

- Abstract Class  
- Pure Virtual Function  
- Inheritance  
- Method Overriding  
- Dynamic Binding  
- Runtime Polymorphism  

---

## 🧾 Program Description

- `Payment` is an abstract base class with a pure virtual function `pay()`
- `CreditCard` and `UPI` are derived classes
- Each derived class provides its own implementation of the `pay()` method
- Base class pointers are used to call methods dynamically at runtime

---

## 🧩 Class Structure

### Abstract Base Class
- `Payment`
  - `virtual void pay(double amount) = 0;`

### Derived Classes
- `CreditCard`
  - Implements payment using credit card
- `UPI`
  - Implements payment using UPI

---

## ▶️ Sample Input (From Code)

```cpp
Payment* p1 = new CreditCard();
Payment* p2 = new UPI();

p1->pay(1500);
p2->pay(800);
