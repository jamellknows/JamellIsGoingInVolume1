//components let you split the UI into independet, reusable poeces and think about each piece in isolationweb3.currentProvider
//cocnceptually components are like function. They accept arbitrary inputs called props and return react elements describing what should appear on the screen


function Welcome(props)
{
    return<h1> Hello, {props.name}</h1>
}

// can also use an ES6 class to define a component

class Welcome extends React.Component{
    render(){
        return <h1>Hello, {this.props.name}</h1>;
    }
}
//when using a class you have to render the return a function can jsut return 


//Rendering a component

const element = <div/>

const element = <Welcome name ="Sara"/>;


function Welcome(props){
    return <h1>Welcome {props.name}</h1>
}
const element = <Welcome name="Sara"/>;
ReactDom.render(
    element,
    document.getElementById('root')
);


//we can create an app component that renders welome many times
// a component can refer to other components in their output. 
//this lets us use the ame component abstraction for any level of detail
// a button , a form or a dialog scree in react are all componly expressed as components


function Welcome(props){
    return <h1> Hello, {props.name}</h1>
}

function App() {
    return (
        <div> 
        <Welcome namr = "Sara"/>
        <Welcome namr = "Tim"/>
        <Welcome namr = "Dave"/>
        </div>
    );
}


ReactDOM.render(
    <App/>
    document.getElementById('root')
);

//Extracting Components

//dont be afraid to split com[pnents into smaller components

function Comment(props)
{
    return(
        <div className="Comment">
        <div className="UserInfo">
        <img className = "Avat</div>
        </div>
    )
}

