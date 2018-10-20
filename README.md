# Pattern Oriented Software Design
#### Fall, 2018

#### Homework 1

# Purpose of the homework:
  Practice to write the unit test and makefile.
# Requirement:
 1. Create `circle.h`, `rectangle.h`, `triangle.h`. You should follow the classes below:

    **Note: Each class constructor below are the skeleton. You should finish implementation by yourself.**

        class circle {
        public:
            Circle(double r):_r(r){}
        }

        class rectangle {
        public:
            Rectangle(double l, double w):_l(l), _w(w){}
        }

        class Triangle{
        public:
            Triangle(double x1, double y1, double x2, double y2, double x3, double y3):_x1(x1), _x2(x2), _x3(x3), _y1(y1), _y2(y2), _y3(y3){}
        }


 2. Implement `area()` and `perimeter()` method for each class.

 3. Implement the `isTriangle()` function to Triangle class.

        class Triangle {
        ...
            bool isTriangle()
        ...
        }

 4. Write the unit test in ut_shape.cpp.

 5. Write the corresponding makefile to generate executable file which named **`hw1`**.

# Note
This time your directory structure should be like:

    - circle.h

    - rectangle.h

    - triangle.h

    - makefile

    - ut_shape.cpp

Make sure your test on local is passed.Then you can push to gitlab and go to jenkins to watch the report.

