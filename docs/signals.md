---
layout: home
title: /signals
permalink: /signals
---

<p align="center"> <img src = "https://media1.tenor.com/images/be5b0d3b2c32d8c140a2b242d5dc1b90/tenor.gif?itemid=14388513" style="width: 250px; height: 250px" /></p>

# What is a signal at C?

A signal is a **"generated interrupt"** that a process can send to another process.

The signs are identified by an integer number. We will not detail all of them, but we will detail some of the most interesting for the programmer:

<pre style="margin-top: 12px">
     Sinal    Value       Description 
#define SIGHUP  1   /* Hangup the process */ 
#define SIGINT  2   /* Interrupt the process */ 
#define SIGQUIT 3   /* Quit the process */ 
#define SIGILL  4   /* Illegal instruction. */ 
#define SIGTRAP 5   /* Trace trap. */ 
#define SIGABRT 6   /* Abort. */
</pre>

<p style="margin-top: 16px"><b>How the signals actually <code style="color:orange;">works</code>?</b> The signals are asynchronous, that means signals not depends of the flow of the code, because if the <code style="color:orange;">signal handler</code> receive an event, then this flow, it's going to be affected by the signal handler. The handler listen any events, while none event is emmited, the flow maintains equal as the design</p>


<h1></h1>
<div style="display: flex; justify-content: space-between; margin-bottom: -20px; margin-top: 50px">
<p><a href="http://simple-shell.me/basic"><--previous</a></p>
<p><a href="http://simple-shell.me/env">next--></a></p>
</div>
