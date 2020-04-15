---
layout: home
title: /signals
permalink: /signals
---

# What is a signal at C?

A signal is a **"generated interrupt"** that a process can send to another process.

## What is jekyll?

The signs are identified by an integer number. We will not detail all of them, but we will detail some of the most interesting for the programmer:

<pre style="margin-top: 12px">
#define SIGHUP  1   /* Hangup the process */ 
#define SIGINT  2   /* Interrupt the process */ 
#define SIGQUIT 3   /* Quit the process */ 
#define SIGILL  4   /* Illegal instruction. */ 
#define SIGTRAP 5   /* Trace trap. */ 
#define SIGABRT 6   /* Abort. */
</pre>
