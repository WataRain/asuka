---
title: Operators
---
# Operators

## Arithmetic Operators

| Symbol | Meaning                           | Example                               |
| ------ | --------------------------------- | ------------------------------------- |
| `+`    | add                               | `x = x + 1;`{:.language-c .highlight} |
| `-`    | subtract                          | `x = x - 1;`{:.language-c .highlight} |
| `*`    | multiply                          | `x = x * 2;`{:.language-c .highlight} |
| `/`    | divide                            | `x = x / 2;`{:.language-c .highlight} |
| `%`    | modulo (remainder after division) | `x = x % 2;`{:.language-c .highlight} |

* In C, `int / int` will resolve to an `int`, so `5 / 2 = 4` **without** the `.5`!

## Increment and Decrement Operators

| Symbol | Meaning        | Example                         |
| ------ | -------------- | ------------------------------- |
| `++`   | increment by 1 | `x++;`{:.language-c .highlight} |
| `--`   | decrement by 1 | `x--;`{:.language-c .highlight} |

## Assignment Operators

| Symbol | Meaning                | Example                            |
| ------ | ---------------------- | ---------------------------------- |
| `=`    | gets                   | `x = 1;`{:.language-c .highlight}  |
| `+=`   | gets itself plus       | `x += 1;`{:.language-c .highlight} |
| `-=`   | gets itself minus      | `x -= 1;`{:.language-c .highlight} |
| `*=`   | gets itself times      | `x *= 2;`{:.language-c .highlight} |
| `/=`   | gets itself divided by | `x /= 2;`{:.language-c .highlight} |

## Relational Operators

| Symbol | Meaning                     | Example                           |
| ------ | --------------------------- | --------------------------------- |
| `==`   | is equal to                 | `2 == 4`{:.language-c .highlight} |
| `!=`   | is not equal to             | `2 != 4`{:.language-c .highlight} |
| `>`    | is greater than             | `2 > 4`{:.language-c .highlight}  |
| `>=`   | is greater than or equal to | `2 >= 4`{:.language-c .highlight} |
| `<`    | is less than                | `2 < 4`{:.language-c .highlight}  |
| `<=`   | is less than or equal to    | `2 <= 4`{:.language-c .highlight} |

## Logical Operators

| Symbol | Meaning | Example                                         |
| ------ | ------- | ----------------------------------------------- |
| `&&`   | and     | `(2 == 4) && (5 == 3)`{:.language-c .highlight} |
| `||`   | or      | `(2 == 4) || (5 == 3)`{:.language-c .highlight} |
| `!`    | not     | `!(2 == 4)`{:.language-c .highlight}            |
