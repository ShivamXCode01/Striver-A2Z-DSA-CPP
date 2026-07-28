# What is Time Complexity?
We can solve a problem using different logic and different codes. Time complexity basically helps to judge different codes and also helps to decide which code is better. In an interview, an interviewer generally judges a code by its time complexity.

Now, the term, time complexity, seems that it is referring to the time taken by a machine to execute a particular code. But in real life, Time complexity does not refer to the time taken by the machine to execute a particular code. 

### Let’s understand why we should not judge any code on the basis of the time taken by a machine.
If we run the same code in a low-end machine(e.g. old windows machine) and in a high-end machine(e.g. Latest MacBook), we will observe that two different machines take different amounts of time for the same code. The high-end machine will take lesser time as compared to the low-end machine. 

So, the time taken by a machine can be changed depending on the configuration. That is why we should not compare the two different codes on the basis of the time taken by a machine as the time is dependent on it.

## Definition:
The rate at which the time, required to run a code, changes with respect to the input size, is considered the time complexity. Basically, the time complexity of a particular code depends on the given input size, not on the machine used to run the code.
Let’s understand this using the following diagram:
<img src="<img src="https://img.shields.io/badge/Language-C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white">

Now, the next question that comes to our mind is how we will represent the time complexity of a code as we are not going to use the standard units like minutes or seconds. Let’s discuss it below:

### How we will represent the time complexity of any code:

To represent the time complexity, we generally use the Big O notation. The Big O notation looks like the following:
<img src="<img src="https://static.takeuforward.org/content/-QAO7KMS2">

Let’s understand this using the following example:
<img src="<img src="https://static.takeuforward.org/content/-R3ft4bH7">
The time complexity for this code will be nothing but the number of steps, this code will take to be executed. So, if we write this in terms of Big O notation, it will be like O(no. of steps).

Let’s observe the steps for this code:

- First, the assigning step(i = 1) will be done.
- The second step will be the comparison i.e. i <= 5.
- The third step will be the print statement (i.e. cout << “Raj”;).
- The fourth step will be the increment(i.e. i++).
- In the fifth step, the updated value of i will be again checked i.e.    the comparison(i <= 5).
- In the sixth step, the print statement will be executed and so on.

This flow will continue until the value of i becomes greater than 5(i.e. 6). In a broader sense, we can observe that the ‘for loop’ will run 5 times and for each time three steps will be surely executed i.e. checking/comparison, printing, and increment. So, the total steps will be 5*3 = 15. And the time complexity in terms of Big O notation will be O(15).

Now, if we write N instead of 5, the number of steps will be then N*3 = 3N and the time complexity will be O(3*N).

But this manual counting process is not feasible for any code. As the ‘for loop’ might run a billion or million times and inside that ‘for loop’, there might be a large no. of operations or some other ‘for loops’ as well. So, we have to find out a better approach to calculate the time complexity of any given code.

Here come the three rules, that we are going to follow while calculating the time complexity:

- ### We will always calculate the time complexity for the worst-case scenario.
- ### We will avoid including the constant terms.
- ### We will also avoid the lower values.