# CPU-scheduling-algorithm-

## First-Come-First-Served (FCFS)

1. Initialize an empty queue.
2. Add arriving processes to the end of the queue.
3. While the queue is not empty
   a. Remove the process at the front of the queue.
   b. Execute the process until completion.
5. Repeat step 3 until all processes are completed.

## Shortest Job First (SJF)

1. Initialize an empty queue.
2. Add arriving processes to the queue with their burst times.
3. While the queue is not empty
   a. Select the process with the shortest burst time.
   b. Remove the selected process from the queue.
   c. Execute the process until completion.
5. Repeat step 3 until all processes are completed.

## Round Robin (RR)

1. Initialize an empty queue.
2. Assign a time quantum (time slice) to each process.
3. Add arriving processes to the end of the queue.
4. While the queue is not empty:
   a. Remove the process at the front of the queue.
   b. Execute the process for the assigned time quantum.
   c. If the process completes within the time quantum, remove it from the queue.
   d. Otherwise, add the process to the end of the queue.
6. Repeat step 4 until all processes are completed.

## Priority Scheduling (PS)

1. Initialize an empty queue.
2. Assign a priority to each process.
3. Add arriving processes to the queue with their priorities.
4. While the queue is not empty:
   a. Select the process with the highest priority.
   b. Remove the selected process from the queue.
   c. Execute the process until completion.
5. Repeat step 4 until all processes are completed.
