//
// Created by Q on 1/9/2021.
//

vector<Student_info> extract_fail(vector<Student_info>& students){
    vector<Student_info> fail;
    remove_copy_if(students.begin(),students.end(),back_inserter(fail),pgrade);
    students.erase(remove_if(students.begin(),students.end(),fgrade),students.end());

    return fail;
}