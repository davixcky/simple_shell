<p align="center"><img src= "https://i.imgur.com/vSDB4vm.png" /></p>
<p align="center"> <img src = "https://hotemoji.com/images/emoji/8/1xbdigiqloc38.png" /></p>

<p align="center"> 
<img src = "https://img.shields.io/badge/Mandatory-100%25-blue" />
<img src="https://img.shields.io/badge/Advanced-100%25-green" />
<img src="https://img.shields.io/badge/Wicky__page-html%3A%2F%2F-orange" />    
<img src="https://img.shields.io/badge/Cohort-11-red" />
</p>

##

# k_shell:crocodile:
This is our litle tiny Shell named **k_shell**. If you want to learn about k_shell, you can read me. This project was created to **Holberton Schooll.**


## Table of contents :clipboard:

 - [Description](https://github.com/davixcky/simple_shell#description-triangular_ruler)
 - [Installation](https://github.com/davixcky/simple_shell#installation-floppy_disk)
 - [Usage](https://github.com/davixcky/simple_shell#usage-hammer)
 - [Example](https://github.com/davixcky/simple_shell#example-computer)
 - [File Structure](https://github.com/davixcky/simple_shell#file-structure-file_folder)

## Description :triangular_ruler:

The file explorer is accessible using the button in left corner of the navigation bar. You can create a new file by clicking the **New file** button in the file explorer. You can also create folders by clicking the **New folder** button.

## Installation :floppy_disk:

### Requirements
 - Gcc >= 4.8.4
 - Linux

### Steps
 - `git clone https://github.com/davixcky/simple_shell.git shell`
 - `cd shell`
 - `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
 - Enjoy it

## Usage :hammer:

*k_shell* supports two modes `interactive` and `non interactive`.

### Basic usage
`./hsh`

### Interactive

 - `./hsh` and then type the commands that you want to execute
 - You can type a command and the prompt appear show again

### Non interactive 

 - `echo "command" | ./hsh`, command is the command that you want to execute
 - Each time that you execute a command, the shell close

## Example :computer:

### Modes

#### Non-interactive
*Command*
```
echo "/bin/ls" | ./hsh
```
*Output*
```
AUTHORS     commands.h     error.c  execute.c  hsh     permissions.c  printers_err.c  README.md  start.c  text.h          utils_text2.c
commands.c  environment.c  error.h  general.h  main.c  printers.c     printers_out.c  shell.h    text.c   tokenization.c  utils_text.c
```
<hr>

#### Interactive
*Command*
```
./hsh
```
Then the prompt appear, so you can type in the command line, and press return
**Ex** - `/bin/ls`

*Output*
```
AUTHORS     commands.h     error.c  execute.c  hsh     permissions.c  printers_err.c  README.md  start.c  text.h          utils_text2.c
commands.c  environment.c  error.h  general.h  main.c  printers.c     printers_out.c  shell.h    text.c   tokenization.c  utils_text.c
```

## File Structure :file_folder:

<p align="center"> 
<img src = "https://imgur.com/SlFLt9b.jpg" />
</p>

