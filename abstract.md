Custom library wrappers using Coccinelle (deRSE 2025 talk)

Submit candidate marked with (**)

Titles:

- Semantic Patch Engineering: Exposing a C library for Cross-Language Reuse (**)
- Tackling Fortran C interoperability using Coccinelle
- Semantic Patch Engineering: the Journey wrapping the BLIS framework for linear algebra
- Semantic Patch Engineering: Crossing the Language Gap 
- Semantic Patch Design for Fortran-C interop/bindings 
- Engineering a Semantic Patch for BLIS bindings


deRSE:

Abstract 1 (**)
Eva is a research software engineer working on project in language YFL (Your Favorite Language).
During her work she discovers that there is a C library which includes the functionality she wants.
Writing the bindings from YFL to C manually is drudgery.
With over 100 functions to bind, it will take her weeks to complete.
If only there was a way to do it faster?
Join this tutorial on Coccinelle, a pattern matching and transformation system, to simplify the task of wrapping a C library with just a couple of simple rules.
By using the right tools for the job, we show you how the daunting task is broken into smaller manageable pieces. 
Participants are welcome to bring along their own C header files (or relevant subsets thereof) and follow along. 
We assume participants come with Coccinelle preinstalled on their laptop (it's widely packaged) and have very basic Python knowledge.

Abstract 2
Exposing procedures between programming languages is menial and repetitious work,
often involving non-trivial amounts of boiler-plate and glue code.
In this talk we take you on a journey of writing library bindings for a large C library (over 500 functions) by using Coccinelle, a pattern matching and transformation system.
Using a small set of semantic patches, step-by-step we will engineer a bridge between programming languages.

Abstract 3
Scientific software is often multi-language creating challenges for software reuse.
While scientists feel comfortable in higher-level languages, system programming and performance experts routinely rely on C and C++.
Most languages expose mechanisms to call C functions, however writing the bindings often turns out to be repetitious and finicky work.
In this talk we take you on a transformative journey using the powerful pattern matching system Coccinelle.
Step-by-step we will engineer the semantic patches needed for wrapping a large dense linear algebra library.

Abstract 4
Polyglot programming is on the rise and research software is no different.
The gap between languages can be crossed using foreign function interfaces also known as glue code. 
This talk introduces a workflow for bridging the said gap.
Using the pattern matching and transformation system, Coccinelle, we engineer a series of semantic patches allowing us to efficiently create the missing glue code.

FOSDEM:

Software developers often find they need to connect a program written in C and C++ with other (high-level) programming languages.
Many languages expose mechanisms by which a language can call routines written in another language, also known as foreign function interfaces or language bindings.
In this  we walk through a cost-efficient workflow for creating library bindings using Coccinelle.
The workflow uses Coccinelle's rules to match function definitions augmented by a custom Python script which does type mapping and interface creation.
Under some circumstances additional "glue" code may can be generated. (QA: Not sure if I need to do this in Python or Cocci yet.)
The workflow is demonstrated on the BLIS library for dense linear algebra consisting of hundreds of functions.


Ideas:
- how to write C libraries in a way conducive to wrapping
  - use a prefix (bli_), define routine visibility
  - stick with interoperable types
- dealing with non-interporable constructs -> must be done case by case
- analogy with bridge (beam, pontoon, stepping-stones)
