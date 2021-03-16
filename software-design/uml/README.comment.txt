<p>The Unified Modeling Language (UML) is the standard modeling language for software and systems development.</p>

<p>There are just too many details that can be misinterpreted or forgotten when developing a complex system without some help. This is where modeling and of course UML comes in.</p>

<p>When you model a system, you abstract away any details that are irrelevant or potentially confusing. Your model is a simplification of the real system, so it allows the design and viability of a system to be understood, evaluated, and criticized quicker than if you had to dig through the actual system itself.</p>

<p>To effectively model a system, you need one very important thing: a language with which the model can be described. And here's where UML comes in.</p>

<p>A modeling language can be made up of pseudo-code, actual code, pictures, diagrams, or long passages of description; in fact, it's pretty much anything that helps you describe your system.</p>

![class-definition-sample-in-uml.png]

<p>There are references to the UML meta-model and profiles throughout notebooks. A more complete description of what the UML meta-model contains and why it is useful is available in <a href="/software-design/uml/meta-model">meta-model</a>.</p>

<p>For now, just think of the UML meta-model as the description of what each element of notation means and a profile as a customization of that description for a specific domain (i.e., banking).</p>

<p>The descriptions of what the notation means are called the semantics of the language and are captured in a language's meta-model.</p>

<p>A modeling language can be anything that contains a notation (a way of expressing the model) and a description of what that notation means (a meta-model).</p>

<p>Every approach to modeling has different advantages and disadvantages, but UML has six main advantages:</p>

<ul>
	<li><i>It's a formal language</i></li>
	<p>Each element of the language has a strongly defined meaning, so you can be confident that when you model a particular facet of your system it will not be misunderstood.</p>

	<li><i>It's concise</i></li>
	<p>The entire language is made up of simple and straightforward notation.</p>

	<li><i>It's comprehensive</i></li>
	<p>It describes all important aspects of a system.</p>

	<li><i>It's scaleable</i></li>
	<p>Where needed, the language is formal enough to handle massive system modeling projects, but it also scales down to small projects, avoiding overkill.</p>

	<li><i>It's built on lessons learned</i></li>
	<p>UML is the culmination of best practices in the object-oriented community during the past 15 years.</p>

	<li><i>It's the standard</i></li>
	<p>UML is controlled by an open standards group with active contributions from a worldwide group of vendors and academics, which fends off "vendor lock-in." The standard ensures UML's transformability and interoperability, which means you aren't tied to a particular product.</p>
</ul>

<h4>What's wrong with using software source code as your model?</h4>

<p>The source code focuses only on the software itself and ignores the rest of the system. Even though the code is a complete and (generally) unambiguous definition of what the software will do, the source code alone simply cannot tell you how the software is to be used and by whom, nor how it is to be deployed; the bigger picture is missing entirely if all you have is the source code.</p>

<p>As well as ignoring the bigger picture of your system, software code presents a problem in that you need to use other techniques to explain your system to other people. You have to understand code to read code, but source code is the language for software developers and is not for other stakeholders, such as customers and system designers. Those people will want to focus just on requirements or perhaps see how the components of your system work together to fulfill those requirements. Because source code is buried in the details of how the software works, it cannot provide the higher level abstract views of your system that are suitable for these types of stakeholders.</p>

<p>Now imagine that you have implemented your system using a variety of software languages. The problem just gets worse. It is simply impractical to ask all the stakeholders in your system to learn each of these implementation languages before they can understand your system.</p>

<p>All of these problems boil down to the fact that source code provides only one level of abstraction: the software implementation level. Unfortunately, this root problem makes software source code a poor modeling language.</p>

<p>At the opposite end of the spectrum from complete and precise source code models are informal languages. Informal languages do not have a formally defined notation; there are no hard and fast rules as to what a particular notation can mean, although sometimes there are guidelines.</p>

<p>A good example of an informal language is natural language. Natural language—the language that you're reading in this text—is notoriously ambiguous in its meaning.</p>

<p>Natural language is flexible and verbose, which happens to be great for conversation but is a real problem when it comes to systems modeling.</p>

<p>This ambiguity tends to result in the, "No, that's not what I meant!" syndrome, where you've described something as clearly as possible, but the person that you are conveying the design to has misunderstood your meaning.</p>

<p>As with the natural language model, all of the details are present in the following picture, but without a definition of what the boxes, connections, and labels mean, you can't be sure about your interpretation (or mine!).</p>

![natural-language-modeling-sample.png]

<p>So, why does any of this matter if your team has a home-grown modeling technique it's been using for years and you all understand what each other means? If you ever have to show your design to external stakeholders, they might become frustrated trying to understand your home-grown symbols, when you could have used a standard notation they already know. It also means you don't have to learn a new modeling technique every time you switch jobs!</p>

<p>Unfortunately, informal languages will always suffer from the dual problem of verbosity and ambiguity, and this is why they are a poor—and sometimes extremely dangerous—technique for modeling systems.</p>

<p>Although natural language is dangerously ambiguous, it is still one of the best techniques for capturing requirements, as you will see when you learn about use cases.</p>

<p>To effectively model a system—avoiding verbosity, confusion, ambiguity, and unnecessary details—you need a formal modeling language .</p>

<p>The modeling language's notation should be small enough to be learned easily and must have an unambiguous definition of the notation's meaning. UML is just such a formal modeling language.</p>

<p>Following picture is an example of a structure expressed in UML. For now, don't worry too much about the notation or its meaning; at this point, the UML diagram is meant to be used only as a comparison to the informal pictorial and natural language models shown previously.</p>

![formal-language-diagram-sample.png]

<p>The best thing about having modeled the system using UML is that the notation in the above picture has a specific and defined meaning. If you were to take this diagram to any other stakeholder in your system, provided he knows UML, the design would be clearly understood. This is the advantage of using formal languages for modeling.</p>
