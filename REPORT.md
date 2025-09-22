By definition git tag is reference to a specific point in repo,s history. It helps to identify releases and to check different versions.
Release is like a snapshot of different versions. It contains more details, binary file and associated tag.
Attaching binaries makes it easy for users to use your software without needing to build it from source.

FEATURE 3
Makefile OF 2nd feature compiles all the source files directly into a single executable in one step.
in makefile of 3rd feature new variables are added, for example LIB = lib/libmyutils.a (for the static library) and STATIC_TARGET = bin/client_static.
ar is used to bundle .o files into a single archive file (static library .a). It doesn’t perform linking, just collects object files.
I didn't use ranlib.
Yes symbols for functions like mystrlen are present (as defined symbols) inside the executable when built statically.
This shows that static linking pulls in the actual code from the static library into the final binary. The functions are copied into the executable at link time, not just referenced.

