// **********************************************************************
//
// Generated by the ORBacus IDL-to-C++ Translator
//
// Copyright (c) 2000
// Object Oriented Concepts, Inc.
// Billerica, MA, USA
//
// All Rights Reserved
//
// **********************************************************************

// Version: 4.0.5

#ifndef ___apptest_skel_h__
#define ___apptest_skel_h__

#include <apptest.h>

#ifndef OB_INTEGER_VERSION
#   error No ORBacus version defined! Is <OB/CORBA.h> included?
#endif

#ifndef OB_NO_VERSION_CHECK
#   if (OB_INTEGER_VERSION != 4000500L)
#       error ORBacus version mismatch!
#   endif
#endif

//
// IDL:AppTest:1.0
//
namespace POA_AppTest
{

//
// IDL:AppTest/Testing:1.0
//
class Testing : virtual public PortableServer::ServantBase
{
    Testing(const Testing&);
    void operator=(const Testing&);

protected:

    //
    // IDL:AppTest/Testing/say:1.0
    //
    void _OB_op_say(OB::Upcall_ptr);

public:

    Testing() { }

    virtual CORBA::Boolean _is_a(const char*)
        throw(CORBA::SystemException);

    virtual CORBA::RepositoryId _primary_interface(const PortableServer::ObjectId&,
                                                   PortableServer::POA_ptr);

    AppTest::Testing_ptr _this();

    virtual OB::DirectStubImpl_ptr _OB_createDirectStubImpl(PortableServer::POA_ptr,
                                                            const PortableServer::ObjectId&);
    virtual void _OB_dispatch(OB::Upcall_ptr);

    //
    // IDL:AppTest/Testing/say:1.0
    //
    virtual void say(const char* text)
        throw(CORBA::SystemException) = 0;
};

} // End of namespace POA_AppTest

//
// IDL:AppTest:1.0
//
namespace OBDirectStubImpl_AppTest
{

//
// IDL:AppTest/Testing:1.0
//
class Testing : virtual public OBStubImpl_AppTest::Testing,
                virtual public OB::DirectStubImpl
{
    Testing(const Testing&);
    void operator=(const Testing&);

protected:

#ifdef HAVE_VCPLUSPLUS_BUGS

    Testing() { }

#endif

    Testing(PortableServer::POA_ptr,
            const PortableServer::ObjectId&,
            PortableServer::ServantBase*);

    friend class POA_AppTest::Testing;

public:

    //
    // IDL:AppTest/Testing/say:1.0
    //
    virtual void say(const char* text);
};

} // End of namespace OBDirectStubImpl_AppTest

#endif
