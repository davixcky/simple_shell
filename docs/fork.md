---
title: /fork
layout: page
permalink: /fork
---

<p align="center"> <img src = "https://i.imgur.com/HdvfaRD.png" style="width: 210px; height: 220px ;" /></p>

<code style="color:orange;">fork()</code>

<h1 style="font-size: 16px">Basic concepts:</h1>

<div style="margin-top: 16px"><b>What is a program?</b> A program is generally expressed in a low-level programming language (such as C or C ++) that, through a compiler or virtual machine, is translated into instructions that correspond to the instruction set offered by the processor.</div>

<p style="margin-top: 16px"><b>What is a process?</b> A process is an instance of a program that is running. Initially, every process has a single line of execution. It can be understood as the dynamic (running) view of a program.</p>

<p style="margin-top: 16px"><b>What does <code style="color:orange;">fork()</code> do?</b> The system call fork (man 2 fork) creates a new child process, almost identical to the parent (the process that calls fork). Once fork successfully returns, two processes continue to run the same program, but with different stacks, datas and heaps.</p>

<h1></h1>

<div style="display: flex; justify-content: space-between; margin-top: 50px">
<p><a href="http://simple-shell.me/env"><--previous</a></p>
<p><a href="http://simple-shell.me/example">next--></a></p>
</div>
