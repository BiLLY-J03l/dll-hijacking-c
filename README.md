# dll-hijacking-c
Demonstration of how dll hijacking works in C


-DLLs are callable subroutines linked together as a binary file that can be dynamically loaded by applications that use the subroutines. (from Windows Internals, Part 1 book)

-an .exe file is written to load a specific dll called legitimate.dll.
-Procmon is used to fiter out the main.exe process and see which dlls are called and from where.

-filters:
![image](https://github.com/user-attachments/assets/42ed8719-5e38-4279-a884-1453d38327bf)

-
