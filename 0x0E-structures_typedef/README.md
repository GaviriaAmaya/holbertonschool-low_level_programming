<img src="https://camo.githubusercontent.com/c5d27ff0111c29e03f64bc98ffd377b21d294db6/68747470733a2f2f7777772e686f6c626572746f6e7363686f6f6c2e636f6d2f686f6c626572746f6e2d6c6f676f2d747769747465722d636172642e706e67">

# 0x0E. C - Structures, typedef

## Learning Objectives

### * What are structures, when, why and how to use them
Structures are data from different types that are defined by the user.

### * How to use `typedef`
`typedef` is a reserved keyword that allows to replace an user defined type for a word that represents that data type.\
It is very useful to define structures data types as an unique word that inherits properties and values.\
`typedef` is used:
```c
/**
 * struct Cell - It is called with this full name, if it is undeclared the typedef
 */
struct Cell
{
	char *core;
	char *mithocondria;
	int *gen;
}

/* typedef with the original name "struct Cell" and new type name "cell_s" */
typedef struct Cell cell_s;

/* It is even renameable in the struct declaration: */
typedef struct Mammal
{
	char *family;
	char *genre;
	int lifeaverage;
} mammal_s; /* Here's the type definition on implicit declaration */
```

## Captain's log

### Visual Studio Code and Tabs.
Yes, you can code as BSD standard with VSCode. Just click on the right inferior corner button "Space size: 4". It allows you to select from tabs and the amount.
Also, you can go to the settings with `Ctrl` + `,` to access configuration. Then type "Spaces". Uncheck the "Editor: Insert Spaces" and, at your choice, edit the indentation amount. This sets by default the tab as a tabulation :3\
You can acces to [this StackOverflow answers](https://stackoverflow.com/questions/36814642/convert-spaces-to-tabs)

### `Typedef` and `alias`
Both `typedef` (C reserved word) and `alias` (Shell command) works the same. You put a name for a data type that works as the new name or the old name. Also, if use `alias`, the command or query iworks as if you put the new alias as you put the entire function


## Author
* Juan Amaya Gaviria. [GaviriaAmaya](https://github.com/GaviriaAmaya)

Holberton School; Cohort 8: Bog 2019
