///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2021 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.hpp
///
/// Author: $author$
///   Date: 12/18/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_JSONTTP_BASE_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_JSONTTP_BASE_MAIN_HPP

#include "xos/app/console/protocol/jsonttp/base/main_opt.hpp"
#include "xos/protocol/jsonttp/message/body/content.hpp"

#define XOS_APP_CONSOLE_PROTOCOL_JSONTTP_BASE_HELLO_MESSAGE_CONTENT "{\"Hello\":\"Hello\"}\r\n"
#define XOS_APP_CONSOLE_PROTOCOL_JSONTTP_BASE_BYE_MESSAGE_CONTENT "{\"Bye\":\"Bye\"}\r\n"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace jsonttp {
namespace base {

/// class maint
template 
<class TExtends = xos::app::console::protocol::jsonttp::base::main_optt<>, 
 class TImplements = typename TExtends::implements>

class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    maint()
    : run_(0), 
      hello_json_(XOS_APP_CONSOLE_PROTOCOL_JSONTTP_BASE_HELLO_MESSAGE_CONTENT),
      bye_json_(XOS_APP_CONSOLE_PROTOCOL_JSONTTP_BASE_BYE_MESSAGE_CONTENT) {
        this->set_content_type_json();
        this->set_content(this->hello_json());
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    /// ...run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = extends::run(argc, argv, env);
        }
        return err;
    }

    /// hello... / bye...
    virtual xos::protocol::jsonttp::message::body::content& hello_json() const {
        return (xos::protocol::jsonttp::message::body::content&)hello_json_;
    }
    virtual xos::protocol::jsonttp::message::body::content& bye_json() const {
        return (xos::protocol::jsonttp::message::body::content&)bye_json_;
    }

protected:
    xos::protocol::jsonttp::message::body::content hello_json_, bye_json_;
}; /// class maint
typedef maint<> main;

} /// namespace base
} /// namespace jsonttp
} /// namespace protocol
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_JSONTTP_BASE_MAIN_HPP
