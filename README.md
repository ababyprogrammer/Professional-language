# C

**C** is a general-purpose computer programming language. It was created in the 1970s by Dennis Ritchie, and remains very widely used and influential. By design, C's features cleanly reflect the capabilities of the targeted CPUs. It has found lasting use in operating systems, device drivers, and protocol stacks, but its use in application software has been decreasing. C is commonly used on computer architectures that range from the largest supercomputers to the smallest microcontrollers and embedded systems.

A successor to the programming language B, C was originally developed at Bell Labs by Ritchie between 1972 and 1973 to construct utilities running on Unix. It was applied to re-
implementing the kernel of the Unix operating system. During the 1980s, C gradually gained popularity. It has become one of the most widely used programming languages, with C compilers 
available for practically all modern computer architectures and operating systems.

The book The C Programming Language, co-authored by the original language designer, served for many years as the de facto standard for the language. C has been standardized since 1989 by the American National Standards Institute (ANSI) and the International Organization for Standardization (ISO).

C is an imperative procedural language, supporting structured programming, lexical variable scope, and recursion, with a static type system. It was designed to be compiled to provide low-level access to memory and language constructs that map efficiently to machine instructions, all with minimal runtime support. Despite its low-level capabilities, the language was designed to encourage cross-platform programming. A standards-compliant C program written with portability in mind can be compiled for a wide variety of computer platforms and operating systems with few changes to its source code.

Since 2000, C has consistently ranked among the top two languages in the TIOBE index, a measure of the popularity of programming languages.


# Overview
C is an imperative, procedural language in the ALGOL tradition.

It has a static type system. In C, all executable code is contained within subroutines (also called "functions", though not in the sense of functional programming). Function parameters are passed by value, although arrays are passed as pointers, i.e. the address of the first item in the array. Pass-by-reference is simulated in C by explicitly passing pointers to the thing being referenced.


C program source text is free-form code. Semicolons terminate statements, while curly braces are used to group statements into blocks.
The C language also exhibits the following characteristics:
-	The language has a small, fixed number of keywords, including a full set of control flow primitives: if/else, for, do/while, while, and switch. User-defined names are not distinguished from keywords by any kind of sigil.
-	It has a large number of arithmetic, bitwise, and logic operators: +,+=,++,&,||, etc.
-	More than one assignment may be performed in a single statement.
-	Functions:
    -	Function return values can be ignored, when not needed.
    -	Function and data pointers permit ad hoc run-time polymorphism.
    - Functions may not be defined within the lexical scope of other functions.
    - Variables may be defined within a function, with scope.
    - A function may call itself, so recursion is supported.
-	Data typing is static, but weakly enforced; all data has a type, but implicit conversions are possible.
-	User-defined (typedef) and compound types are possible.
    -	Heterogeneous aggregate data types (struct) allow related data elements to be accessed and assigned as a unit. The contents of whole structs cannot be compared using a single built- in operator (the elements must be compared individually).
    -	Union is a structure with overlapping members; it allows multiple data types to share the same memory location.
    -	Array indexing is a secondary notation, defined in terms of pointer arithmetic. Whole arrays cannot be assigned or compared using a single built-in operator. There is no "array" keyword in use or definition; instead, square brackets indicate arrays syntactically, for example month.
    -	Enumerated types are possible with the enum keyword. They are freely interconvertible with integers.
    -	Strings are not a distinct data type, but are conventionally implemented as null-terminated character arrays.
-	Low-level access to computer memory is possible by converting machine addresses to pointers.
-	Procedures (subroutines not returning values) are a special case of function, with an empty return type void.
-	Memory can be allocated to a program with calls to library routines.
-	A preprocessor performs macro definition, source code file inclusion, and conditional compilation.
-	There is a basic form of modularity: files can be compiled separately and linked together, with control over which functions and data objects are visible to other files via static and extern attributes.
-	Complex functionality such as I/O, string manipulation, and mathematical functions are consistently delegated to library routines.
-	The generated code after compilation has relatively straightforward needs on the underlying platform, which makes it suitable for creating operating systems and for use in embedded systems.

While C does not include certain features found in other languages (such as object orientation and garbage collection), these can be implemented or emulated, often through the use of external libraries (e.g., the GLib Object System or the Boehm garbage collector).

# C++
**C++** (/ˈsiː plʌs plʌs/, pronounced "C plus plus" and sometimes abbreviated as CPP) is a high-level, general-purpose programming language created by Danish computer scientist Bjarne Stroustrup. First released in 1985 as an extension of the C programming language, it has since expanded significantly over time; as of 1997 C++ has object-oriented, generic, and functional features, in addition to facilities for low-level memory manipulation.

It is almost always implemented as a compiled language, and many vendors provide C++ compilers, including the Free Software Foundation, LLVM, Microsoft, Intel, Embarcadero, Oracle, and IBM.

C++ was designed with systems programming and embedded, resource-constrained software and large systems in mind, with performance, efficiency, and flexibility of use as its design highlights. C++ has also been found useful in many other contexts, with key strengths being software infrastructure and resource-constrained applications, including desktop applications, video games, servers (e.g. e-commerce, web search, or databases), and performance-critical applications (e.g. telephone switches or space probes).

C++ is standardized by the International Organization for Standardization (ISO), with the latest standard version ratified and published by ISO in December 2020 as ISO/IEC 14882:2020 (informally known as C++20). The C++ programming language was initially standardized in 1998 as ISO/IEC 14882:1998, which was then amended by the C++03, C++11, C++14, and C++17 standards. The current C++20 standard supersedes these with new features and an enlarged standard library. Before the initial standardization in 1998, C++ was developed by Stroustrup at Bell Labs since 1979 as an extension of the C language; he wanted an efficient and flexible language similar to C that also provided high-level features for program organization. Since 2012, C++ has been on a three-year release schedule with C++23 as the next planned standard.

# History
In 1979, Bjarne Stroustrup, a Danish computer scientist, began work on "C with Classes", the predecessor to C++. The motivation for creating a new language originated from Stroustrup's experience in programming for his PhD thesis. Stroustrup found that Simula had features that were very helpful for large software development, but the language was too slow for practical use, while BCPL was fast but too low-level to be suitable for large software development.

When Stroustrup started working in AT&T Bell Labs, he had the problem of analyzing the UNIX kernel with respect to distributed computing. Remembering his PhD experience, Stroustrup set out to enhance the C language with Simula-like features. C was chosen because it was general-purpose, fast, portable and widely used. As well as C and Simula's influences, other languages also influenced this new language, including ALGOL 68, Ada, CLU and ML.


Initially, Stroustrup's "C with Classes" added features to the C compiler, Cpre, including classes, derived classes, strong typing, inlining and default arguments.
A quiz on C++11 features being given in Paris in 2015 In 1982, Stroustrup started to develop a successor to C with Classes, which he named "C++" (++ being the increment operator in C) after going through several other names. New features were added, including virtual functions, function name and operator overloading, references, constants, type-safe free-store memory allocation (new/delete), improved type checking, and BCPL style single-line comments with two forward slashes (//). Furthermore, Stroustrup developed a new, standalone compiler for C++, Cfront.
In 1984, Stroustrup implemented the first stream input/output library. The idea of providing an output operator rather than a named output function was suggested by Doug McIlroy (who had previously suggested Unix pipes).


# C#
**C#** (pronounced See sharp) is a general-purpose high-level programming language supporting multiple paradigms. C# encompasses static typing,: 4  strong typing, lexically scoped, imperative, declarative, functional, generic,: 22  object-oriented (class-based), and component-oriented programming disciplines.
The C# programming language was designed by Anders Hejlsberg from Microsoft in 2000 and was later approved as an international standard by Ecma (ECMA-334) in 2002 and ISO/IEC (ISO/IEC 23270) in 2003. Microsoft introduced C# along with .NET Framework and Visual Studio, both of which were closed-source. At the time, Microsoft had no open-source products. Four years later, in 2004, a free and open-source project called Mono began, providing a cross-platform compiler and runtime environment for the C# programming language. A decade later, Microsoft released Visual Studio Code (code editor), Roslyn (compiler), and the unified .NET platform (software framework), all of which support C# and are free, open-source, and cross-platform. Mono also joined Microsoft but was not merged into .NET.
As of November 2022, the most recent stable version of the language is C# 11.0, which was released in 2022 in .NET 7.0.
A big thanks to you for read this types!

