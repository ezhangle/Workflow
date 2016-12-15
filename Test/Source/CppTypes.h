#include "../../Import/Vlpp.h"

namespace test
{
	using namespace vl;
	using namespace vl::reflection;
	using namespace vl::reflection::description;

	enum class Seasons
	{
		None = 0,
		Spring = 1,
		Summer = 2,
		Autumn = 4,
		Winter = 8,

		Good = Spring | Autumn,
		Bad = Summer | Winter,
	};

	struct Point
	{
		vint								x = 0;
		vint								y = 0;
	};

	class PointClass : public Object, public Description<PointClass>
	{
	public:
		vint								x = 0;
		vint								y = 0;
	};

	class ObservableValue : public Object, public AggregatableDescription<ObservableValue>
	{
	protected:
		vint								value;
		WString								name;
	public:
		Event<void(vint, vint)>				ValueChanged;

		ObservableValue();
		ObservableValue(vint _value);
		ObservableValue(vint _value, Nullable<double> x);
		ObservableValue(vint _value, Nullable<bool> x);
		~ObservableValue();

		static Ptr<ObservableValue>			Create(vint value, const WString& name);
		static ObservableValue*				CreatePtr(vint value, const WString& name);

		vint								GetValue();
		void								SetValue(vint newValue);
		WString								GetName();
		void								SetName(const WString& newName);
		WString								GetDisplayName();
	};

	class CustomInterfaceProcessor : public Object, public Description<CustomInterfaceProcessor>
	{
	public:
		static vint							Sum(Ptr<IValueEnumerable> values);
	};
}

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#define UNITTEST_TYPELIST(F)\
			F(test::Seasons)\
			F(test::Point)\
			F(test::PointClass)\
			F(test::ObservableValue)\
			F(test::CustomInterfaceProcessor)\

			UNITTEST_TYPELIST(DECL_TYPE_INFO)

			extern bool						LoadCppTypes();
		}
	}
}