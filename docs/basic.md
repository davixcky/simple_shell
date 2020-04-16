---
title: /basic
layout: home
permalink: /basic
---

# Basic

# Get started!

<p align="center">
<img align="center" class="center" src="https://images.unsplash.com/photo-1461896836934-ffe607ba8211?ixlib=rb-1.2.1&ixid=eyJhcHBfaWQiOjEyMDd9&auto=format&fit=crop&w=750&q=80" width="450" height="250" >
</p>
​
### Difference between prompt, shell, terminal emulators..? (shell baSIC)
When we start in the word of the commands, UNIX, programming, etc we think that all these things are the same, but the reality and theory is not. And that is one of the biggest error of a novice.
​
#### 1. Prompt
 - Line that wait for user to type a command
 - Each time that you press enter, and show you the expected output, the prompt appears again
 - Each prompt can have an unique style
 - The style is applied give it a format in the environment variable named `PS1`
 - You can general information like `current directory`, `current username`, `name of the computer`...
​
This is a prompt by default and basic
<img src="https://i.imgur.com/OjuSACW.png" style = "max-width: 100%">
​
 1. `davixcky` is the username
 2. `@` is just a separator
 3. `david-pc` is the name of my computer
 4. `~` is like a shorcut that means [HOME](https://twiki.org/cgi-bin/view/Wikilearn/TildeSlash)
​
And this is another prompt that do the same, but with an unique style
<img src="https://i.imgur.com/vYXIRiq.png" style = "max-width: 100%">
​
 In this case `90%` of the current information, is just icons and graphics information.
 - `Home icon` that mean that we our current directory is `/home/davixcky` or the previous shortcut `~`
 - `Rigth hand` is the time and information about a timer
##### 1.1 PS1
 - Environment variable
 - Config for appearance of prompt 

<table>
  <thead>
    <tr>
      <th style="text-align: center">Default PS1</th>
      <th style="text-align: center">Customized PS1</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td style="text-align: center"><img src = "https://i.imgur.com/OAduWKS.gif" style = "max-width: 100%"/></td>
      <td style="text-align: center"><img src = "https://i.imgur.com/PYDv0LI.gif" style = "max-width: 100%"/></td>
    </tr>
  </tbody>
</table>

​
#### 2. Shell
​
 - Program that receives an input (*from the keyboard or a file*) and return an output (*can be an error*)
 - The input is processed by the SO
 - `Shell` is a bridge between the I/O and the system
 - Its a way to interact with the system
 - Also is called Bash
 - Some example of shell are `zsh`, `csh`, `sh`, `powershell` (*Windows*) and our shell `kayman-shell`
 - The expected behavior is the same 
 - Almost all the `shell` are written with the same pattern
 - The pattern is: `Read`, `Analyze` and `Execute`

<table>
  <thead>
    <tr>
      <th style="text-align: center">Sh</th>
      <th style="text-align: center">Zsh</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td style="text-align: center"><img src = "https://imgur.com/V8DMYKP.gif" style = "max-width: 100%"/></td>
      <td style="text-align: center"><img src = "https://imgur.com/7BIfQ4M.gif" style = "max-width: 100%"/></td>
    </tr>
  </tbody>
</table>

### Terminal emulators
 - Is the window
 - Is a way for open a `Shell`
 - You can interact with the `Shell` from this part
 - Exists a lot of `terminal emulators`, [Konsole](https://konsole.kde.org/), [Iterm2 (Mac Os)](https://www.iterm2.com/). [Windows terminal](https://www.microsoft.com/en-us/p/windows-terminal-preview/9n0dx20hk701?activetab=pivot:overviewtab), etc.
 
<table>
  <thead>
    <tr>
      <th style="text-align: center">Konsole</th>
      <th style="text-align: center">xterm</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td style="text-align: center"><img src = "https://imgur.com/Fx46wpC.gif" style = "max-width: 100%"/></td>
      <td style="text-align: center"><img src = "https://imgur.com/y2Eoa6v.gif" style = "max-width: 100%"/></td>
    </tr>
  </tbody>
</table>
​
In this example we are comparing `Konsole` and `xterm` and you can see big differences.
​
 - The main difference are the possibilities for the look and feel. In `konsole` we have a lot options for customize
 - This is not a fear comparison because `xterm` is an emulator for emergency (*for me*), that is why the config is `by default`
 
### Conclusion 
 - `Prompt` is just the bar, status, or info, that you can see every time before you type a command
 - `Shell` is a program that read and interpret lines and sent that lines to `SO` and then print the result
 - `Terminal emulator` is the entire windows, so you can interact with the `Shell`

<h1></h1>
<div style="display: flex; justify-content: space-between; margin-bottom: -20px; margin-top: 50px">
<p><a href="http://simple-shell.me/get_started"><--previous</a></p>
<p><a href="http://simple-shell.me/signals">next--></a></p>
</div>
