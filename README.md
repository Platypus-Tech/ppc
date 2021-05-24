# The Pigeon Potato Compiler

```
       ____
   ___/   * >
 /   \__/
(       )
\______/
  |  |
  |  |
 /\ /\
```

OMG THAT LOOKS LIKE A DEFORMED STORK, IT'S SUPPOSED TO LOOK LIKE A PIGEON WITH A POTATO BODY.
***
## About
This compiler is in alpha stage, and is going to be able to compile C, C++, D, etc. Here's the direct order of what I want to do those in:
1. C
2. C++
3. D
4. C#
5. Ada
## Building
This should work on Linux.
```shell
git clone https://github.com/Platypus-Tech/ppc.git
cd ppc
gcc ppc.c -o ppc # you can use any compiler you want, like cc or clang, just as long as you can use it.
```
I know it's ironic that you still have to `GCC` or `CC` it, I have yet to implement `Makefile`s.
## Usage
If you put ppc in `/usr/bin`, you would do this:
```
you@some-linux-distro:~$ ppc <file-to-compile>
```
If you don't, and it's in your current directory, do this:
```
you@some-linux-distro:~$ ./ppc <file-to-compile>
```
Of course, I can't compile anything yet. You can, though, get help (I think):
```
you@some-linux-distro:~$ ppc help
```
That's if it's in usr/bin, but you know how to do it if it's not (if it snot!).
