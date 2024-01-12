# What is a Static Library?
A static library in C is a collection of object files (*.o files) that are linked into the executable at compile time. When you use functions from a static library, the code of these functions is included directly into your final executable. This differs from dynamic libraries, where the code is separate and linked at runtime.

# Advantages of Static Libraries
* Simplicity: Once linked, the executable is standalone and doesn't depend on external libraries at runtime.
* Performance: Sometimes slightly faster, as there's no overhead of dynamic linking.
# Disadvantages
* Size: Executables can be larger, as all used library code is included.
* Flexibility: Updating a library means recompiling all programs that use it.
