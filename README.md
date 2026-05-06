# 251-Final-Project---Gradebook
Gradebook final project for ITC-251


Instructions:

 gradebook — persistent records with sorting and updates
Manage a simple student records file that survives across runs. Support adding, finding, updating, deleting, and listing students; compute a few basic statistics. For ordering, implement your own selection or insertion sort on a chosen key (e.g., by name, by ID, or by average). Robustness beats features: parse defensively, write safely (consider writing to a temp, then replacing), and avoid unsafe input functions. A strong submission shows careful structure (model, storage, sort, ui), clear handling of malformed data, and a short demo that exercises add→list→sort→update→stats without corrupting the file.

My idea is that we have a gradebook structure to define all our variables then work on our functions. I think it'll be good to
start here so were all using the same variables and function names to make it easier to compile it all together.
Functions: 
1. Add Student ( Complete )
2. Find student
3. Update student
4. List grade  ( Complete )
5. Add grade ( Complete )
6. Edit grade  ( Complete )
7. Delete grade ( Complete )
8. list students
   I. Using insertion/selection/etc sort
   
9. Save info/load in previous info  // I think a text file is fine?
10. Design UI                        // I think it'll be be good to make this barebones, but functional at first. Then make it pretty                                        // later if we have time.

The way I learned is that we should have header files '.h' and c files '.c'  header files declare everything and c files implement

I think our structure can have these variables. Maybe two structures would be optimal, lmk what yall think.
Student ID
name
grade
Assignment Name
student count




