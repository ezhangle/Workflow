/***********************************************************************
Generated from ../Resources/Codegen/NewCustomInterface.txt
***********************************************************************/

#include "NewCustomInterface.h"

/***********************************************************************
Global Variables and Functions
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_NewCustomInterface)
	vl_workflow_global::NewCustomInterface instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_NewCustomInterface)

namespace vl_workflow_global
{
	::vl::WString NewCustomInterface::main()
	{
		throw 0;
	}

	NewCustomInterface& NewCustomInterface::Instance()
	{
		return Getvl_workflow_global_NewCustomInterface().instance;
	}

	class __vwsnc2_main_CreateEnumerator__vl_reflection_description_IValueEnumerator : public ::vl::Object, public virtual ::vl::reflection::description::IValueEnumerator
	{
	public:
		::vl::vint32_t index = 0;
		::vl::reflection::description::Value GetCurrent() override;
		::vl::vint32_t GetIndex() override;
		bool Next() override;
	};

	class __vwsnc1_main__IMyInterface : public ::vl::Object, public virtual ::IMyInterface
	{
	public:
		::vl::Ptr<::vl::reflection::description::IValueEnumerator> CreateEnumerator() override;
		::vl::vint32_t Get100() override;
	};



	::vl::reflection::description::Value __vwsnc2_main_CreateEnumerator__vl_reflection_description_IValueEnumerator::__vwsnc2_main_CreateEnumerator__vl_reflection_description_IValueEnumerator()
	{
		throw 0;
	}

	::vl::vint32_t __vwsnc2_main_CreateEnumerator__vl_reflection_description_IValueEnumerator::__vwsnc2_main_CreateEnumerator__vl_reflection_description_IValueEnumerator()
	{
		throw 0;
	}

	bool __vwsnc2_main_CreateEnumerator__vl_reflection_description_IValueEnumerator::__vwsnc2_main_CreateEnumerator__vl_reflection_description_IValueEnumerator()
	{
		throw 0;
	}


	::vl::Ptr<::vl::reflection::description::IValueEnumerator> __vwsnc1_main__IMyInterface::__vwsnc1_main__IMyInterface()
	{
		throw 0;
	}

	::vl::vint32_t __vwsnc1_main__IMyInterface::__vwsnc1_main__IMyInterface()
	{
		throw 0;
	}
}

/***********************************************************************
Class (::IMyInterface)
***********************************************************************/

::vl::vint32_t IMyInterface::IMyInterface()
{
	throw 0;
}

::vl::vint32_t IMyInterface::IMyInterface()
{
	throw 0;
}
