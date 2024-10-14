# dll-hijacking-c
Demonstration of how dll hijacking works in C


-DLLs are callable subroutines linked together as a binary file that can be dynamically loaded by applications that use the subroutines. (from Windows Internals, Part 1 book)

-an .exe file is written to load a specific dll called legitimate.dll.

-Procmon is used to fiter out the main.exe process and see which dlls are called and from where.

-filters:
![image](https://github.com/user-attachments/assets/42ed8719-5e38-4279-a884-1453d38327bf)

-this is what happens when I run main.exe:
![image](https://github.com/user-attachments/assets/d7b55576-0def-4943-bd15-08bafa4aaedc)
![image](https://github.com/user-attachments/assets/6bf0ba9c-f39e-4d73-85a3-2b4f6afe0a29)


-Basically, main.exe tries to load a dll called legitimate.dll into memory and it fails to get a handle to the dll.

