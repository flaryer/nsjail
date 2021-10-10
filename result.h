#ifndef RESULT_HPP
#define RESULT_HPP
#include "include/json.hpp"
namespace Result {
const uint64_t extraRealMs = 250;
struct Result {
	int64_t memory;
	struct TimeUsage {
		int64_t sys;
		int64_t usr;
		int64_t real;
	} time;
	int returnCode;
	int signal;
};
void to_json(nlohmann::json &j, const Result &res);
void from_json(const nlohmann::json &j, Result &res);
void to_json(nlohmann::json &j, const Result::TimeUsage &time);
void from_json(const nlohmann::json &j, Result::TimeUsage &time);
}  // namespace Result
#endif