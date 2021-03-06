#if !defined(FUNCDB_META_COMMAND_HPP)
#define FUNCDB_META_COMMAND_HPP

#include <string>

namespace funcdb {

enum class MetaCommandResult { Exit, Success, UnrecognizedCommand };

MetaCommandResult DoMetaCommand(std::string const& command);

}  // namespace funcdb

#endif  // FUNCDB_META_COMMAND_HPP
