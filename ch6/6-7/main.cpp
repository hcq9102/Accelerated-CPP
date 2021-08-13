/*
 * aim to classify the students into two parts,one did the homework,
 * another not did;
 * and this is just like the extracts_fails' function did.so we can do the same.
 *
 * */
std::vector<Student_info> extract_didnt(std::vector<Student_info>& s){
    std::vector<Student_info>::iterator iter = std::stable_partition(s.begin(),s.end(), did_all_hw);
    std::vector<Student_info> didnt(iter,s.end());
    s.erase(iter,s.end());

    return didnt;
}
