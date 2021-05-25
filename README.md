# The Pigeon Potato Compiler

```
       ____
   ___/   * >
 /   \__/
(       )
\______/
  |  |
 /\ /\
```

Uh, how deformed-stork-y is that?
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
make
```
You can use `gcc`, `cc`, or `clang`, but that's messed up. Actually, the `Makefile` uses GCC to compile `ppc.c`. Ah, fudge it.
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
## Are there any Easter Eggs?
Of course there are! Try `ppc astro-zombies`... hint-hint, [Astro-Zombies lyrics](https://www.google.com/search?q=lyrics+to+astro-zombies&rlz=1CASICM_enUS950&oq=lyrics+to+astro-zombies&aqs=chrome..69i57.9921j0j7&sourceid=chrome&ie=UTF-8&safe=active&ssui=on)...
