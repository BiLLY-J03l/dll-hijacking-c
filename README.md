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

-What are we going to do now is to compile the dll code and move it to a path where the main.exe process tries to load the dll.

-I'll move it to C:/Windows/

![image](https://github.com/user-attachments/assets/ad74540c-a901-49d2-b824-0eb0cd289d56)

-here is how it worked in procmon:

![image](https://github.com/user-attachments/assets/189034be-49c7-4183-9146-a1f467cec639)

-and how it worked on the machine:

![image](https://github.com/user-attachments/assets/bfc319b3-f58b-4c2d-bb94-f48a6eb15991)

![image](https://github.com/user-attachments/assets/12ddd5e5-eb2b-4271-a0cf-c933018c0a17)


