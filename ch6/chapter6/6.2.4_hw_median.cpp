//
// Created by Q on 1/9/2021.
//

double optimistic_median(const Student_info& s){
    vector<double> nonzero;
    remove_copy(s.homework.begin(),s.homework.end(),back_inserter(nonzero),0);
    if(nonzero.empty())
        return grade(s.midterm,s.final,0);
    else
        return grade(s.midterm,s.final,median(nonzero));
}

