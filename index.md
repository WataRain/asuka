---
title: Asuka
layout: home
---

[Inspired by Misaki,](https://lowestofthe1ow.github.io/misaki-quartz/) this is a knowledge repository primarily drawing upon the various courses I have taken in De La Salle University. This is being made in the hopes of being a useful "second-brain" of some sort, not only to remember what has been previously said but also to interconnect the teachings of various disciplines. Keep in mind that [I am a BSCS-ST student,](https://www.dlsu.edu.ph/colleges/ccs/undergraduate-degree-programs/cs-st/) so the courses seen here may not represent the entirety of the university.

With that said, unlike Misaki, courses are arranged not necessarily in chronological order of taking, but rather as close as can be to their natural order as stipulated in the flowchart. For example, `CCPROG1, CCPROG2, and CCPROG3` are not separated in `"Year 1 Term 1", "Year 1 Term 2", and "Year 1 Term 3"` folders but in one `Programming Series` folder. Here is an index of each course organized by their series as I've identified them:

## Programming Series
1. [Logic Formulation and Introductory Programming (CCPROG1)](Programming/01-CCPROG1/index.md)
   * (The only page with content as of the moment.)
2. [Programming with Structured Data Types (CCPROG2)](Programming/02-CCPROG2/index.md)
3. [Object Oriented Programming (CCPROG3)](Programming/03-CCPROG3/index.md)
4. [Advanced Programming (CSADPRG)](Programming/04-CSADPRG/index.md)

## Algorithms Series
1. [Discrete Structures (CCDSTRU)](Algorithms/01-CCDSTRU/index)
2. [Data Structures and Algorithms (CCDSALG)](Algorithms/02-CCDSALG/index.md)
3. [Algorithms and Complexity (CSALGCM)](Algorithms/03-CSALGCM/index)
4. [Advanced Algorithms and Complexity (STALGCM)](Algorithms/04-STALGCM/index)

## Mathematics Series
1. [Foundation Course in Mathematics (MTH101A)](Mathematics/01-MTH101A/index.md)
2. [Differential Calculus for Computer Science Studnets (CSMATH1)](Mathematics/02-CSMATH1/index.md)
3. [Linear Algebra for Computer Science Students (CSMATH2)](Mathematics/03-CSMATH2/index.md)
4. [Integral Calculus for Computer Science Students (ST-MATH)](Mathematics/04-ST-MATH/index.md)

## Computing Series
1. [Introduction to Computing (CCICOMP)](Computing/01-CCICOMP/index.md)

## Database Series
1. CCINFOM
1. STADVDB

## Development Series
1. CCAPDEV
1. MOBDEVE
1. CSSECDV

## Software Engineering Series
1. CSSWENG
1. STSWENG

# Graph view
Admittedly, even then, each "series" is interconnected, so there is some vagueness when it comes to defining such: the internal folder structure that orders these courses are based on the flowchart, but may not necessarily reflect exactly how the university sees it. Therefore, this repository provides a graphical index to achieve a more flexible organization of courses. The resulting graph below is based from the flowchart and is generated using a Python application:

<pre class="mermaid">
---
title: ID 123 BSCS-ST (AY 2023-2024)
---
graph LR
classDef has_status stroke:#0f0
subgraph y1_t1 ["Y1T1"]
ccprog1["CCPROG1"]
mth101_a["MTH101A"]
end
subgraph y1_t2 ["Y1T2"]
ccprog2["CCPROG2"]
ccicomp["CCICOMP"]
ccdstru["CCDSTRU"]
csmath1["CSMATH1"]
end
subgraph y1_t3 ["Y1T3"]
ccprog3["CCPROG3"]
ccdsalg["CCDSALG"]
csmath2["CSMATH2"]
stt101_a["STT101A"]
end
subgraph y2_t1 ["Y2T1"]
ccinfom["CCINFOM"]
csadprg["CSADPRG"]
csalgcm["CSALGCM"]
csintsy["CSINTSY"]
end
ccprog1 ---> ccprog2
mth101_a ---> csmath1
ccprog2 ---> ccprog3
ccdstru -.-> ccdsalg
ccprog2 -.-> ccdsalg
mth101_a ---> csmath2
ccprog2 ---> ccinfom
ccprog3 ---> csadprg
ccdsalg ---> csalgcm
ccdstru ---> csintsy
ccdsalg ---> csintsy

click ccprog1 "Programming/01-CCPROG1"
</pre>
