#  Holberton School - 0x1B. C - Makefiles


The focus of this project is to learn:

* What are make, Makefiles
* When, why and how to use Makefiles
* What are a rules and how to set and use them
* What are explicit and implicit rules
* What are the most common / useful rules
* What are variables and how to set and use them

## Environment
* Ubuntu 14.04 LTS
* GCC Standard C90



## File Descriptions
* 0-Makefile
	* creates an executable file from `main.c` and `holberton.c`
	* name of the executable: `holberton`
	* rules: all
* 1-Makefile
 	* name of the executable: `holberton`
	* variables: `CC`(compiler), `SRC`(`.c` files)
	* rules: all
* 2-Makefile
 	* name of the executable: `holberton`
	* variables:
		*  `CC`(compiler)
		* `SRC`(`.c` files)
		*  `OBJ`(`.o` files)
		* `NAME` (name of the executable)
	* rules: all
* 3-Makefile
 	* name of the executable: `holberton`
	* variables:
		*  `CC`(compiler)
		* `SRC`(`.c` files)
		*  `OBJ`(`.o` files)
		* `NAME` (name of the executable)
		* `RM`(program to remove files)
	* rules: all, clean, oclean, fclean, re
* 4-Makefile
 	* name of the executable: `holberton`
	* variables:
		*  `CC`(compiler)
		* `SRC`(`.c` files)
		*  `OBJ`(`.o` files)
		* `NAME` (name of the executable)
		* `RM`(program to remove files)
		* `CFLAGS`(compiler flags)
	* rules: all, clean, oclean, fclean, re
* 5-Makefile
 	* name of the executable: `holberton`
	* variables:
		*  `CC`(compiler)
		* `SRC`(`.c` files)
		*  `OBJ`(`.o` files)
		* `NAME` (name of the executable)
		* `RM`(program to remove files)
		* `CFLAGS`(compiler flags)
	* rules: all, clean, oclean, fclean, re

## License
Public Domain, no copyright protection
