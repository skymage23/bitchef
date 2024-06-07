# bitchef
Modular IDE with built-in dependency management, build environment management, and an SDK for writing custom, project-specific IDE modules.

Wherein we can, we try to use pure Python, but some modules are written
in C++ because it does not make sense to write them in Python when doing so
will unnecessary headaches on the part of the developer. Example: Inter-process
Python object marshalling, status updates, and logging. Objects that qualify
for this treatment are objects where it is easier to model them mentally
as being entirely a Python module in scope and not having to worry about
binary object parsing overhead and having to run a receiver thread and/or
a transmitter thread and having slowdown due to the GIL. 
Let's try to handle that outside the Python runtime.

We may invert this entirely someday, having BitChef in native code while
only the custom Tasks are Python modules. But, such is not this day.
