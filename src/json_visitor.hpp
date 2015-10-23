#ifndef JSONVISITOR_HPP
#define JSONVISITOR_HPP

#include <string>
#include <sstream>
#include <memory>

#include "architecture.hpp"  // Node
#include "visitor.hpp"

#include "json/json.h"

class JsonVisitor : public Visitor {
    using Visitor::Visitor;  // inheriting Visitor's ctor

    void startUp() override;
    void onNode(std::shared_ptr<const Node>) override;
    void onConnection(std::shared_ptr<const Connection>) override;
    void tearDown() override;

   private:
    Json::Value root;
};

#endif
