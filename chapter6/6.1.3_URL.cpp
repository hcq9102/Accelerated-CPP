//
// Created by Q on 1/8/2021.
//

vector<string> find_urls(const string& s){
    vector<string> ret;
    typedef string::const_iterator iter;
    iter b = s.begin();
    iter e = s.end();
    //scan whole input string
    while(b !=e){
        //查找一个或多个紧跟：//的字母
        b = find_urls(b,e);
        //如果查找成功
        if( b!=e){
            //获取URL的其余部分
            iter after = url_end(b,e);
            //记录这个URL
            ret.push_back(string(b,after));
            //将b向前推进并查找位于本行中的其他URL
            b = after;
        }
    }
    return ret;
}

string::const_iterator url_end(string::const_iterator b, string::const_iterator e){
    return find_if(b,e,not_url_char);
}
//#include<cctype> // isalnum()
bool not_url_char(char c){
    //除字母数字以外，其他有可能出现在一个url中的字符
    static const string url_ch = "~;/?:@=&$-_.+!*'(),";
    //看c能否出现在一个URL中并返回求反的结果
    return !(isalnum(c)||find(url_ch.begin(),url_ch.end(),c)!=url_ch.end());
}