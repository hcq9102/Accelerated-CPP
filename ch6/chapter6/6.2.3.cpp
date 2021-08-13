//
// Created by Q on 1/9/2021.
//based on average grade to get sum grade
double average(const vector<double>& v){
    return accumulate(v.begin(), v.end(),0.0);
}

double average_analysis(const Student_info& s){
    return grade(s.midterm, s.final,average(s.homework));
}

double average_analysis(const vector<Student_info>& students){
    vector<double> grades;
    transform(students.begin(), students.end(),back_inserter(grades), average_grade);
    return median(grades);
}