#include "WriteFile.h"
#include <iostream>
#include <utility>
#include "../BlockMaker.h"
#include "../Exceptions/wrong_arguments_amount.h"
#include "../Exceptions/cant_open_file.h"

static BlockMaker<WriteFile> maker("writefile");

WriteFile::WriteFile(std::vector<std::string> &args) {
    if (args.size() != 1){
        throw error::wrong_arguments_amount("Wrong arguments for command <writefile>!");
    }
    file_.open(args[0]);
    if (!file_.is_open()){
        throw error::cant_open_file("Cant open file " + args[0] + "!");
    }
}

WriteFile::~WriteFile() {
    file_.close();
}

std::vector<std::string> WriteFile::execute(std::vector<std::string>& data) {
    size_t vect_size = data.size();
    for (size_t i = 0; i < vect_size; ++i){
        file_ << data[i] << std::endl;
    }
    std::vector<std::string> null;
    return null;
}

COMMAND_TYPE WriteFile::get_command_type() const noexcept {
    return COMMAND_TYPE::OUTPUT;
}
