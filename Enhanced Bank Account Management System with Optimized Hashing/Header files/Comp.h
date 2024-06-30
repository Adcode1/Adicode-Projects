#ifndef COMP_H
#define COMP_H

#include "BaseClass.h"
#include <iostream>
#include <vector>

class Comp : public BaseClass {
public:
    void createAccount(std::string id, int count) override;
    std::vector<int> getTopK(int k) override;
    int getBalance(std::string id) override;
    void addTransaction(std::string id, int count) override;
    bool doesExist(std::string id) override;
    bool deleteAccount(std::string id) override;
    int databaseSize() override;
    int hash(std::string id) override;
    
private:
    int hash2(std::string id){
        int ans=0;
        for(int i=0;i<id.length();i++){
            ans+=id[i];
        }
    
    return ans;}
    // Other data members and functions specific to Your implementation
};

#endif // COMP_H
