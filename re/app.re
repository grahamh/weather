open BsReactNative;

let app = () =>
  <View
    style=Style.(
            style([flex(1.), justifyContent(Center), alignItems(Center)])
          )>
    <Text value="Hi, this is a sample app," />
    <Text value="using React Native, ReasonML and ReasonML Expo bindings" />
  </View>;